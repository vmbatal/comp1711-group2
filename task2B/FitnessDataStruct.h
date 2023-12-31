#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define buffer_size 100

typedef struct {
	char date[11];
	char time[6];
	char steps[5];
} fits;

void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);

int ct = 0;
int ithen = 0;
int lin;
char rec;
char a;
char line[buffer_size];
char filename[buffer_size];
fits fit[100];

int options(){
    printf("A: Specify the filename to be imported\n");       
    printf("B: Display the total number of records in the file\n");          
    printf("C: Find the date and time of the timeslot with the fewest steps\n");           
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");        
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");
    printf("Enter choice: ");
}

int nrecords(FILE *file) { 

lin = 0;
rec = 0;
int lastrec;
while (rec != EOF){
    printf("rec %d\n", rec);
    lastrec = rec;
    rec = fgetc(file);
    if (rec == '\n'){
        lin++;
    }
    printf("lr %d\n", lastrec);
    } 

printf("lastrec= %d\n", lastrec);
if (lastrec != 10) {
    lin = lin+1;
}
printf("Total records: %d\n", lin);
lin = 0;
rec = 0;
}


int min(FILE *file) {
    ct = 0;
        while (fgets(line, buffer_size, file))
        {
            tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
            int sts = atoi(fit[ct].steps);
            int ststhen = atoi(fit[ct-1].steps);
            int ststop = atoi(fit[ithen].steps);
            if (ct != 0){
                if (sts <= ststhen){
                    if (sts <= ststop){
                        ithen=ct;
                }}}
            else (sts > ststhen);
            ct++;
        }
        printf("Fewest steps: %s %s\n", fit[ithen].date, fit[ithen].time);
}

int max(FILE *file) {
    ct = 0;
        ithen = 0;
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                int ststhen = atoi(fit[ct-1].steps);
                int ststop = atoi(fit[ithen].steps);
                if (ct != 0){
                    if (sts >= ststhen){ 
                            if (sts >= ststop){
                                ithen=ct;
                }}}
                else (sts < ststhen);
                ct++;
            }
        printf("Largest steps: %s %s\n", fit[ithen].date, fit[ithen].time);
}

int means(FILE *file) {
ct = 0;
        ithen = 0;
        float tot = 0;
        float mean = 0;    
        float first;
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                int ststhen = atoi(fit[0].steps);
                printf("now= %d\n", sts);
                printf("then= %d\n", ststhen);
                if (ct != 0){
                    tot = tot + sts;
                    printf("tot= %f\n", tot);
                }
                else (sts != 0);
                ct++;
                first = ststhen;
            }
        printf("final tot= %f\n", tot);
        mean = (tot + first)/ct;
        int meannow = mean;
        printf("mean then= %f\n", mean);
        if ((mean-0.5)<meannow){
            mean = mean + 1;
            printf("mean now= %f\n", mean);
        }
        else ((mean-0.5)<meannow);
        meannow = mean + 1;
        printf("Mean step count: %d\n", meannow);
}

int stepperiod(FILE *file) {
    ct = 0;
        ithen = 0;
        int period = 0;
        int topperiod = 0;
        int ithenstart = 0;   
            
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                if (sts <= 500){
                        period = 0;
                    }
                else (ct != 0);
                if (sts > 500){ 
                    period++;
                    if (period > topperiod){
                        topperiod++;
                        ithen=ct;
                        ithenstart = ithen - (topperiod-1);
                        }
                else (sts != 0);
                ct++;
            }}
        printf("Longest period start: %s %s\n", fit[ithenstart].date, fit[ithenstart].time);
        printf("Longest period end: %s %s\n", fit[ithen].date, fit[ithen].time);
}