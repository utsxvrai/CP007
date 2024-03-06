#include <stdio.h>
#include <string.h>


int main() {

    int n=3;
    int pid[]={1, 2, 3};
    int at[]={0};
    int bt[]  = {10,5,8};;
    int priority[]={2,0,1};
    int st[n];
    int ct[n];
    int tat[n];
    int wt[n];
    int rt[n];
    float avg_tat;
    float avg_wt;
    float avg_rt;
    int total_tat = 0;
    int total_wt = 0;
    int total_rt = 0;
    int total_idle_time = 0;
    float throughput;
    int is_completed[n];
    memset(is_completed,0,sizeof(is_completed));

    

    int current_time = 0;
    int completed = 0;
    int prev = 0;

    while(completed != n) {
        int dj = -1;
        int mx = -1;
        for(int i = 0; i < n; i++) {
            if(is_completed[i] == 0) {
                if(priority[i] > mx) {
                    mx = priority[i];
                    dj = i;
                }
            }
        }
        if(dj != -1) {
            st[dj] = current_time;
            ct[dj] = st[dj] + bt[dj];
            tat[dj] = ct[dj] - at[dj];
            wt[dj] = tat[dj] - bt[dj];
            rt[dj] = st[dj] - at[dj];
            
            total_tat += tat[dj];
            total_wt += wt[dj];
            total_rt += rt[dj];
            total_idle_time += st[dj] - prev;

            is_completed[dj] = 1;
            completed++;
            current_time = ct[dj];
            prev = current_time;
        }
        else {
            current_time++;
        }
        
    }


    avg_tat = (float) total_tat / n;
    avg_wt = (float) total_wt / n;
    avg_rt = (float) total_rt / n;

    
    printf("Average Turnaround Time = %.2f\n", avg_tat);
    printf("Average Waiting Time = %.2f\n", avg_wt);
    printf("Average Response Time = %.2f\n", avg_rt);



    return 0;
}
