     LOVELY PROFESSIONAL UNIVERSITY,PHAGWARA,PUNJAB

                                  

NAME=> VASHISHT MUNI GUPTA
ROLL NO. => 66
SECTION=> K18JE
REG. NO. => 11813502
EMAIL ID => munivashisht895330@gmail.com
GITHUB LINK=> https://github.com/Vashisht8953/OperatingSystem-assignment


                                             
 
QUESTION :
 
 Consider that a system has P resources of same type. These resources are shared by Q processes time to time. 
All processes request and release the resources one at a time. Generate a solution to demonstrate that, 
the system is in safe state when following conditions are satisfied. 
Conditions: 
1.  Maximum resource need of each process is between 1 and               P. 
2. Summation of all maximum needs is less than P+Q 	

 DISCRIPTION:

Given answer is based upon Round Robin Algorithm. Here we are taking data from user and user can enter limited no of jobs. 
While solving this first we take input from user and put it in a queue. The value of front and rear taken here is -1 as initially they are not at any place.
 Now process will run in queue and if its Burst time is less than given time quantum then this process will be done and we take out that process from queue.
 If time quantum is less than Burst time then the process will re-enter in the queue. This will happen till the every process are completed.

SAFE STATE:
if the system is in a safe state, then there exists an allocation sequence that allows the processes to finish executing. 
UNSAFE STATE:
if there is no allocation sequence that allows the processes to finish executing, then the system is in an unsafe state.

EXAMPLE:
Let us take a system with 4 processes that will share 9 resources of same attribute. Each process can request and release maximum of L instances. Resource instances can be requested and released only one at a time. So as per given condition the system will be in safe state or not:

Number of processes (P) = 4
Number of resources (R) = 9
Since deadlock-free condition is:
R >= P(N-1) +1
Where R is total number of resources,
P is the number of processes, and
N is the max need for each resource.

9 >= 4(N-1) +1
2 >= (N-1)
N =< 3
Therefore, the largest value of L that will always avoid deadlock is 3. 
therefore here for 3 instances of resources the system will be in safe state.

 
