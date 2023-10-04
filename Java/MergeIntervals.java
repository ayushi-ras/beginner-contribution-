class Solution {
    public int[][] merge(int[][] intervals) {

        int n = intervals.length;

        if(n <= 1){
            return intervals;
        }

        // Sort Intervals --> based on start time

        Arrays.sort(intervals, (a, b) -> {
           

            
            if(a[0] != b[0]){
                return a[0] - b[0];
            }
            else{
               return a[1] - b[1]; 
            }
            
        });

        List<int[]> mergedIntervals = new ArrayList<>();

        int [] currInterval = intervals[0];

        for(int i = 1; i < n; i++){
               if(intervals[i][0] <= currInterval[1]){
                   // overlapping interval --> update the end time

                   currInterval[1] = Math.max(currInterval[1], intervals[i][1]);

               }

               else{
                   // non overlapping interval

                   mergedIntervals.add(currInterval);
                   currInterval = intervals[i];

               }

        }


        mergedIntervals.add(currInterval);

        return mergedIntervals.toArray(new int[mergedIntervals.size()][]);


        
    }
}
