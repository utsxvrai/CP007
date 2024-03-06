#include <stdio.h>

#define n 4

int main() {
    int bt[n] = {5,4,2,1};
    int at[n] = {0,1,2,4};
    int quantum, rem_time[n], ct[n];
    int tat[n], wt[n], rt[n];
    int total_tat = 0, total_wt = 0, total_rt = 0;

    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    for (int i = 0; i < n; i++) {
        rem_time[i] = bt[i];
    }

    int current_time = 0;
    int completed = 0;

    while (completed < n) {
        int flag = 0; 
        for (int i = 0; i < n; i++) {
            if (rem_time[i] > 0) {
                if (rem_time[i] > quantum) {
                    current_time += quantum;
                    rem_time[i] -= quantum;
                } else {
                    current_time += rem_time[i];
                    ct[i] = current_time;
                    rem_time[i] = 0;
                    tat[i] = ct[i] - at[i];
                    wt[i] = tat[i] - bt[i];
                    rt[i] = wt[i];
                    total_tat += tat[i];
                    total_wt += wt[i];
                    total_rt += rt[i];
                    completed++;
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            // If no process executed in the current time quantum, move to the next arrival time
            int min_arrival = 10000; // some large number to ensure we find the minimum
            for (int i = 0; i < n; i++) {
                if (rem_time[i] > 0 && at[i] < min_arrival) {
                    min_arrival = at[i];
                }
            }
            current_time = min_arrival;
        }
    }

    // Calculate averages
    float avg_tat = (float)total_tat / n;
    float avg_wt = (float)total_wt / n;
    float avg_rt = (float)total_rt / n;

    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
    printf("Average Waiting Time = %.2f\n", avg_wt);
    printf("Average Response Time = %.2f\n", avg_rt);

    return 0;
}
