#include <stdio.h>

void main(){

int flights[8][2] = {
{800,1016},
{943, 1152},
{1119, 1331},
{1247, 1500},
{1400, 1608},
{1545, 1755},
{1900, 2120},
{2145, 2358}
};

int *pflights;

pflights = &flights[0][0];
int inputTime = 1000;

int departure_time = 0;
int arrival_time = 0;

printf("Desired Departure Time: %d\n", inputTime);
find_closest_flight(inputTime, pflights, pflights);

return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){

    int des_time_in_sec = conv_to_sec(desired_time);
    int curr = 0;
    int next;

    for(int i = 0; i < 16; i+=2){

            curr = conv_to_sec(*(departure_time+i));
            next = conv_to_sec(*(departure_time+(i+2)));

            if(next > des_time_in_sec){
                    if((des_time_in_sec - curr) > (next - des_time_in_sec)){
                        printf("Closest Departure Time: %d\n", *(departure_time+(i+2)));
                        printf("Arrival Time: %d\n", *(arrival_time+(i+3)));
                    }else{
                        printf("Closest Departure Time: %d\n", *(departure_time+i));
                        printf("Arrival Time: %d\n", *(arrival_time+(i+1)));}
                break;
            }
    }

}

int conv_to_sec(int time){
    int minutes = time % 100;
    return (((time / 100) * 3600) + (minutes * 60));
}


