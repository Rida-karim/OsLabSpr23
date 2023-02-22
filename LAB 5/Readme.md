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

#STEP 6: Installing Postfix

1. Postfix is included in Ubuntu’s default repositories, so you can install it with APT.
To begin, update your local apt package cache:
COMMAND: sudo apt update

2. Then install the postfix package with the following command. Note that here we
pass the DEBIAN_PRIORITY=low environmental variable into this installation
command. This will cause the installation process to prompt you to configure some
additional options:
COMMAND: sudo DEBIAN_PRIORITY=low apt install postfix
![image](https://user-images.githubusercontent.com/123716596/220527064-717ffab9-0479-49fe-8869-7867166fb813.png)
![image](https://user-images.githubusercontent.com/123716596/220527114-5bdf5f78-9723-4390-9a87-378aae2ae540.png)
![image](https://user-images.githubusercontent.com/123716596/220527222-44e3209a-e599-47c3-a136-ddcbc1cbbc6b.png)
![image](https://user-images.githubusercontent.com/123716596/220527504-3034affe-c927-46f2-b126-a554ef87f50b.png)
![image](https://user-images.githubusercontent.com/123716596/220527543-f3ccdaf8-ed99-4202-b0d0-f9443c5bb6ff.png)
![image](https://user-images.githubusercontent.com/123716596/220527875-2cc843cb-b11d-4cd3-81ae-16c066e4c648.png)
CONTINUE ON INSTALLING
![image](https://user-images.githubusercontent.com/123716596/220528090-e780bd98-9440-4651-b9e0-b3c727874a11.png)

Note: If you need to ever return to change these settings, you can do so by typing:
COMMAND : sudo dpkg-reconfigure postfix
When you are prompted to restart services, accept the defaults and choose OK.
When the installation process finishes, you’re ready to make a few updates to your
Postfix configuration.

# Step 7 — Changing the Postfix Configuration
Now you can adjust some settings that the package installation process didn’t
prompt you for. Many of Postfix’s configuration settings are defined in
the /etc/postfix/main.cf file. Rather than editing this file directly, you can use
Postfix’s postconf command to query or set configuration settings.
To begin, set the location for your non-root Ubuntu user’s mailbox. In this guide, we’ll
use the Maildir format, which separates messages into individual files that are then
moved between directories based on user action. The alternative option that isn’t
covered in this guide is the mbox format, which stores all messages within a single
file.
Set the home_mailbox variable to Maildir/. Later, you will create a directory
structure under that name within your user’s home directory.
Configure home_mailbox by typing:
COMMAND : sudo postconf -e 'home_mailbox= Maildir/'
![image](https://user-images.githubusercontent.com/123716596/220538092-bb87b794-5172-4764-8e82-275234217366.png)

Next, set the location of the virtual_alias_maps table, which maps arbitrary email
accounts to Linux system accounts. Run the following command, which maps the
table location to a hash database file named /etc/postfix/virtual:

COMMAND: sudo postconf -e 'virtual_alias_maps= hash:/etc/postfix/virtual'

![image](https://user-images.githubusercontent.com/123716596/220538266-1c19f61c-717a-4c25-910c-72ae95e3b673.png)
Now that you’ve defined the location of the virtual maps file in your main.cf file, you
can create the file itself and begin mapping email accounts to user accounts on your
Linux system. Create the file with your preferred text editor; in this example, we’ll
use nano:
COMAND: sudo nano /etc/postfix/virtual
EDIT GNU nano 6.2:
contact@example.com sammy
admin@example.com sammy
![image](https://user-images.githubusercontent.com/123716596/220538671-6d89a83f-8443-44af-b46c-39f43be79993.png)

After you’ve mapped all of the addresses to the appropriate server accounts, save
and close the file. If you used nano, do this by pressing CTRL + X, Y, then ENTER.
Apply the mapping by typing:
COMMAND: sudo postmap /etc/postfix/virtual
Restart the Postfix process to be sure that all of your changes have been applied:
COMMAND: sudo systemctl restart postfix
Assuming you followed the prerequisite Initial Server Setup guide, you will have
configured a firewall with UFW. This firewall will block external connections to
services on your server by default unless those connections are explicitly allowed, so
you’ll have to add a firewall rule to allow an exception for Postfix.
You can allow connections to the service by typing:
COMMAND: sudo ufw allow Postfix

With that, Postfix is configured and ready to accept external connections. However,
you aren’t yet ready to test it out with a mail client. Before you can install a client and
use it to interact with the mail being delivered to your server, you’ll need to make a
few changes to your Ubuntu server’s setup.
![image](https://user-images.githubusercontent.com/123716596/220538993-7fbbcad5-f046-4534-ba08-cdb548b029a9.png)

# STEP 8:  Installing the Mail Client and Initializing the Maildir Structure
In order to interact with the mail being delivered, this step will walk you through the
process of installing the s-nail package. This is a feature-rich variant of the
BSD xmail client which can handle the Maildir format correctly.
Before installing the client, though, it would be prudent to make sure
your MAIL environment variable is set correctly. s-nail will look for this variable to
figure out where to find mail for your user.
To ensure that the MAIL variable is set regardless of how you access your account
— whether through ssh, su, su -, or sudo, for example — you’ll need to set the
variable in the /etc/bash.bashrc file and add it to a file within /etc/profile.d to
make sure it is set for all users by default.
To add the variable to these files, type:

COMMAND : echo 'export MAIL=~/Maildir' | sudo tee -a /etc/bash.bashrc | sudo tee -a /etc/profile.d/mail.sh
To read the variable into your current session, source
the /etc/profile.d/mail.sh file:
COMMAND: source /etc/profile.d/mail.sh
With that complete, install the s-nail email client with APT:
COMMAND : sudo apt install s-nail
![image](https://user-images.githubusercontent.com/123716596/220539378-83b10e89-5378-496c-955f-e07c60ed4509.png)

Before running the client, there are a few settings you need to adjust. Open
the /etc/s-nail.rc file in your editor:
COMMAND: sudo nano /etc/s-nail.rc
![image](https://user-images.githubusercontent.com/123716596/220539911-acc94157-e2ec-458c-84b7-057752d15026.png)
DOWN CURSOR EDIT THIS AT BOTTTOM:
. . .
set emptystart
set folder=Maildir
set record=+sent

![image](https://user-images.githubusercontent.com/123716596/220540095-90bdc968-5f9e-4159-a800-724e09d39a96.png)

Here’s what these lines do:
• set emptystart: allows the client to open even with an empty inbox
• set folder=Maildir: sets the Maildir directory to the
internal folder variable
• set record=+sent creates a sent mbox file for storing sent mail within
whichever directory is set as the folder variable, in this case Maildir
Save and close the file when you are finished. You’re now ready to initialize your
system’s Maildir structure.
A quick way to create the Maildir structure within your home directory is to send
yourself an email with the s-nail command. Because the sent file will only be
available once the Maildir is created, you should disable writing to it for this initial
email. Do this by passing the -Snorecord option.
Send the email by piping a string to the s-nail command. Adjust the command to
mark your Linux user as the recipient:
COMMAND: echo 'init' | s-nail -s 'init' -Snorecord sammy
![image](https://user-images.githubusercontent.com/123716596/220540462-fab9a867-d3f8-48d4-b2d8-b17307b97b09.png)
NOTE: The S- in snorecord is capital
You can can check to make sure the directory was created by looking for
your ~/Maildir directory:
COMMAND: ls -R ~/Maildir
![image](https://user-images.githubusercontent.com/123716596/220540728-8b1bb2c4-4dac-4648-b9ab-232c387c778e.png)
Step 4 — Testing the Client
To open the client, run the s-nail command:
COMMAND: s-nail

![image](https://user-images.githubusercontent.com/123716596/220541087-87c6a8ff-0a3d-4114-b2d9-2a1a87f823ae.png)
Press ENTER to display the message AND PRESS DOWN CURSOR:

![image](https://user-images.githubusercontent.com/123716596/220541242-7865ba6b-dd23-404a-8a66-50c7bc63cda2.png)
![image](https://user-images.githubusercontent.com/123716596/220541863-b1750bbb-03d2-4e4b-86f2-5341e704ad2b.png)

You can get back to the message list by typing h, and then ENTER:
![image](https://user-images.githubusercontent.com/123716596/220542357-d22c4594-e2af-4e77-87a1-3a2880e4773e.png)

Since this message isn’t very useful, you can delete it by pressing d, and then ENTER:
d
To get back to the terminal, type q and then ENTER:
q
![image](https://user-images.githubusercontent.com/123716596/220542494-7d4c60c0-943c-4d42-ae9c-5f6640bf53f3.png)


















