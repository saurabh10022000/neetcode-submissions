class Solution {
    public int findMinimumCost(int n, int k, int[][] costToTransfer) {
        // Use Floyd-Warshall to find shortest paths between all pairs
        long[][] dist = new long[n][n];
        
        // Initialize distances
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = costToTransfer[i][j];
            }
        }
        
        // Floyd-Warshall algorithm
        for (int mid = 0; mid < n; mid++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    dist[i][j] = Math.min(dist[i][j], dist[i][mid] + dist[mid][j]);
                }
            }
        }
        
        // For each location, calculate the cost to transfer to the nearest neighbor
        // This represents the cost of NOT keeping this location as a consolidation point
        long[] transferCosts = new long[n];
        for (int i = 0; i < n; i++) {
            long minCost = Long.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    minCost = Math.min(minCost, dist[i][j]);
                }
            }
            transferCosts[i] = minCost;
        }
        
        // Sort transfer costs and sum the (n - k) smallest costs
        // These are the locations we remove by transferring to k consolidation points
        java.util.Arrays.sort(transferCosts);
        
        long totalCost = 0;
        for (int i = 0; i < n - k; i++) {
            totalCost += transferCosts[i];
        }
        
        return (int) totalCost;
    }
}
