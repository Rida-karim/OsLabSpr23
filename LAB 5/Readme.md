# LAB 5

# TASK 1:

# STEP 1: Install Apache
1. Before installing the first LAMP component, ensure the package list on the system
is up to date. In the terminal, type:

COMMAND : sudo apt update
![image](https://user-images.githubusercontent.com/123716596/220514515-5c31bd99-48c7-4f2f-b42b-64eee764a226.png)

2. To install the Apache package, run the following command:
COMMMAND: sudo apt install apache2 -y

![image](https://user-images.githubusercontent.com/123716596/220515043-dc0ca40d-378d-4ad8-9567-5508c5e09131.png)

3. Check if Apache installed correctly by checking the Apache service status:
COMMAND: sudo service apache2 status

The service shows as running in the output:
![image](https://user-images.githubusercontent.com/123716596/220515352-26dddc3f-7bd0-4121-b06a-32eec970f36a.png)
Exit the status screen by pressing Ctrl + C on the keyboard.

4. Next, make sure that the UFW firewall contains the Apache profiles by typing in the
following command:
COMMAND: sudo ufw app list

![image](https://user-images.githubusercontent.com/123716596/220515706-1df0437c-a964-40dc-a651-72d67d6a57ce.png)

5. Ensure the Apache Full profile allows the traffic on ports 80 and 443 by running
the command:
COMMAND: sudo ufw app info "Apache Full"

![image](https://user-images.githubusercontent.com/123716596/220515922-b65b19dd-177f-46a5-a707-13f27e303ce1.png)

6. To confirm that Apache is running, enter the IP address of your server in the
address bar of an internet browser and press ENTER.
The test Apache web server page should display as below.

http://127.0.0.1/

![image](https://user-images.githubusercontent.com/123716596/220517081-bd95d38c-8b40-468b-976e-e17ae12aedff.png)

# STEP 2: Install MySQL and Create a Database
Install MySQL by typing the following command:
COMMAND: sudo apt install mysql-server -y
![image](https://user-images.githubusercontent.com/123716596/220517765-e762e517-6744-4a8d-9bce-1434353f20c9.png)

# STEP 3: Install PHP

Although other programming languages, such as Python and Pearl, also work well
within LAMP, PHP is usually the final layer of the stack because it integrates well
with MySQL. As a dynamically typed language, PHP embeds into HTML, improving
the speed and reducing the complexity of web applications.
Install PHP by following the steps below.
1. Obtain the necessary PHP packages by typing:

COMMAND: sudo apt install php libapache2-mod-php php-mysql -y





