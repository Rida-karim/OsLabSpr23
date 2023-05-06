# Q1:
Task1:
a. Create an icecream eating contest problem protected by a semaphore lock. Use global
variables icecreamremaining. Create 3 threads for 3 persons to eat icecreams until all are
finished. But only one person will be given icecreamcone at a time by the salesman. So restrict
access to icecreams so that only one thread can decrement it by using a semaphor. So use
sem_wait and Sem_post in thread .
b. get each person to count money from his wallet for the icecream payment which can take one to
2 seconds during which other person can acquire the salesman to sell him icecream. Redo the
coding to accommodate this condition in your threads as well.

![image](https://user-images.githubusercontent.com/123716596/236639425-20cfd203-641a-4129-a937-2ade0c6b34cb.png)
![image](https://user-images.githubusercontent.com/123716596/236639438-ae48047b-d62b-4749-b981-ee9a66c0150e.png)
![image](https://user-images.githubusercontent.com/123716596/236639771-dd118b90-2713-4144-870f-fa59daa5a307.png)


# Q2:
Task 2:
You need to synchronize customers at boarding lounge of an airport using semaphore. where there are
10 customers, each needs to weight his luggage, get it checked and get a boarding pass. During each
task passengers are too bored that they sleep, weighting luggage takes 4 seconds sleep, security
check for luggage needs 7 seconds sleep and getting boarding pass needs 3 seconds sleep.

![image](https://user-images.githubusercontent.com/123716596/236639808-de2ba9d2-2cd7-4930-8e76-2b027f3d74b0.png)
![image](https://user-images.githubusercontent.com/123716596/236639758-bb0846a2-2532-4ebc-8be8-378672e106f1.png)
![image](https://user-images.githubusercontent.com/123716596/236639897-b4fafc0b-b83f-44c8-8c2d-9af0e2ccbee4.png)
![image](https://user-images.githubusercontent.com/123716596/236639907-c35f7083-0596-40e2-9d22-4f03a4cbd488.png)


# Q3:
Task 3:
Imagine you are designing a ticketing system for a popular concert. The system will have multiple ticket
sellers, each running on a separate thread. To prevent overselling, you need to ensure that no two sellers
can sell the same ticket at the same time. How would you use semaphores in C to ensure that only one
ticket seller can access the ticket database at a time, while the others wait until the resource becomes
available? (Create a code based implementation)

![image](https://user-images.githubusercontent.com/123716596/236640045-a8c051fb-b419-4b61-8a38-5d9a35360589.png)
![image](https://user-images.githubusercontent.com/123716596/236640054-6dd5ff62-9998-4af6-ae0b-76c30b0003e8.png)
![image](https://user-images.githubusercontent.com/123716596/236640103-aeb37e5b-f220-4ac3-8358-afc3e27462d0.png)
![image](https://user-images.githubusercontent.com/123716596/236640112-953ace5f-912e-4c35-b710-a68a3c732224.png)

