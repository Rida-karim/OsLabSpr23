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

![image](https://user-images.githubusercontent.com/123716596/220519026-9ee7e144-1c65-4b11-88bb-1de6ec9d85dd.png)

2. Modify the way Apache serves files by opening the dir.conf file in a text editor with
root privileges:

COMMAND: sudo nano /etc/apache2/mods-enabled/dir.conf

The configuration file looks like in the example below:
By default, Apache first looks for an index.html file card.

![image](https://user-images.githubusercontent.com/123716596/220519393-73b72b36-3244-4dcf-b93a-0e943e0977bc.png)
![image](https://user-images.githubusercontent.com/123716596/220519512-03302818-74c2-4c16-89a9-f4204a1a329d.png)

3. Edit the list so that the index.php file is in the first position:
![image](https://user-images.githubusercontent.com/123716596/220519918-a8fde7be-59c5-4280-9a23-42e54225a266.png)

4. Press CTRL + X to save and close the file. Press y and ENTER to confirm.

# STEP 4: Install PHP Modules (Optional)
If necessary, add more modules to improve the functionality of PHP. Search, view,
and install various libraries and modules by following the procedure below.
1. Get a list of available PHP modules with:

COMMAND: apt-cache search php- | less

![image](https://user-images.githubusercontent.com/123716596/220520425-0d47721d-bb9d-4c72-9c25-2c2afaf66bdb.png)

By prsessing enter we reach up to php8.1-tidy
![image](https://user-images.githubusercontent.com/123716596/220521415-77792c27-bf02-49f9-861c-b6a3f64ef221.png)
: PRESS Q to exit from it
2. Scroll up and down by using the arrow keys to see all the options, including a short
description for each module.
3. For example, to find out what the module php8.1-tidy does, type:
COMMAND: apt-cache show php8.1-tidy

![image](https://user-images.githubusercontent.com/123716596/220521826-a6114e2c-b833-4cf5-b438-93dbd140b46d.png)
4. To install the php8.1-tidy package after viewing its description, use the following
command:
COMMAND: sudo apt install php8.1-tidy
![image](https://user-images.githubusercontent.com/123716596/220522104-3831e26f-77e9-4f2d-874e-276e6cc1d671.png)

# STEP 5: Restart Apache
For the changes to take effect, restart the Apache service by typing:
COMMAND: sudo systemctl restart apache2
If the command executes correctly, it returns no output.
![image](https://user-images.githubusercontent.com/123716596/220522456-64d54224-f356-4530-9d37-b20314153cc5.png)

# STEP 6: Test PHP Processing on Web Server
To test the new LAMP installation, create a basic PHP script and place it in the web
root directory located at /var/www/html/, then check if the script is accessible via an
internet browser. The steps below explain the procedure for performing this test.
1. Create a file in the web root directory by typing the following command:
COMMAND: sudo nano /var/www/html/info.php

![image](https://user-images.githubusercontent.com/123716596/220522675-b3428f1b-e402-4de9-934f-7f5056a50c60.png)
2. Inside the file, type the PHP code:
<?php
phpinfo ();
?>

![image](https://user-images.githubusercontent.com/123716596/220522850-17bcab2d-d3a1-41fb-b648-3b0776e4499d.png)

3. Press CTRL + X to save and close the file. Press y and ENTER to confirm.
4. Open an internet browser and type the following address:
BROWSE: [server-ip-address]/info.php
![image](https://user-images.githubusercontent.com/123716596/220525155-fca46947-9789-490a-b708-14d31a4e5bb5.png)

Alternatively, type:

BROWSE: localhost/info.php
The output should display the details of the LAMP stack, as seen in the image below:
![image](https://user-images.githubusercontent.com/123716596/220525309-85e1a38e-8bd5-4fc6-9312-a226a99fced2.png)













