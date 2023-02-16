# LAB 3

Setting a static ip:open net plan and statically set the ip address and change dchp4 to yes then apply the netplan apply

![image](https://user-images.githubusercontent.com/123716596/219343625-de9a24c5-0149-4b47-ad91-f02cf44a1c82.png)

![image](https://user-images.githubusercontent.com/123716596/219343515-e4e22747-03e0-45c2-b42b-cfee4aa266b7.png)

![image](https://user-images.githubusercontent.com/123716596/219344212-cf9d4448-6782-40d1-84af-ce37cbf9943d.png)

![image](https://user-images.githubusercontent.com/123716596/219344480-e26e96d4-c355-480b-930b-4ab0bccae564.png)


# RESTART NETWORK MANAGER SERVICE

![image](https://user-images.githubusercontent.com/123716596/219346051-9752339c-a2da-4199-b776-c9a5fc74f3bb.png)

# INTSALLATION & CONFIGURATION OF SAMBA

![image](https://user-images.githubusercontent.com/123716596/219346823-1116a537-597e-4b65-8a8f-78b3af747d6d.png)

1. To install SAMAB on your Ubuntu use the following command

![image](https://user-images.githubusercontent.com/123716596/219349198-e28d3085-55f2-4869-b007-6a1904428b3c.png)

2. After installing check SAMBA stsus using the following command

This will show that your SAMBA server is active/running.

![image](https://user-images.githubusercontent.com/123716596/219349633-e23d0641-3b1e-4c56-a40f-0d3aa5592456.png)

3. Now create a directory that will be shared across platforms

![image](https://user-images.githubusercontent.com/123716596/219356859-5a878fd7-da95-4630-b48e-41ebedb15e94.png)

# sudo mkdir -p /home/rida/sharingFolder COMMAND create it


![image](https://user-images.githubusercontent.com/123716596/219357135-051ee5e6-39e7-4db2-808f-4499280454b2.png)

![image](https://user-images.githubusercontent.com/123716596/219357523-5cfb03ba-4aa9-4efc-a1a9-bc4987d72445.png)


4. Now give permissions to the above directory named sharingFolder
sudo chmod 777 /home/rida/sharingFolder  COMMAND

![image](https://user-images.githubusercontent.com/123716596/219359961-6f5bd100-926f-4a7a-aeb5-9b2479a8c4e0.png)

5. Now create a SAMBA side user to access the directory

sudo useradd user1   COMMAND 
![image](https://user-images.githubusercontent.com/123716596/219360222-668131f4-4be4-4aa0-aab4-6a63dc988e84.png)

6. Now set SAMBA user password

sudo smbpasswd -a user1 COMMAND
![image](https://user-images.githubusercontent.com/123716596/219361356-2b4ea80e-11b5-418f-a5ad-b7ba1cb2edea.png)

7. Now go to SAMBA configuration file to enable sharing of the directory sharingFolder

sudo nano /etc/samba/smb.conf COMMAND

![image](https://user-images.githubusercontent.com/123716596/219361919-7371fd73-a843-4e5a-bfd6-ecf058dff505.png)

After opening the file. Go to the bottom of the file using ctrl+V and type the below
commands:
AFTER PRESSING CTRL V
![image](https://user-images.githubusercontent.com/123716596/219362477-39fd1d11-ad27-46c8-87cd-5379d779c63b.png)

PRESS CTRL V again and again while going it gone on to the bottom of the terminal screen
![image](https://user-images.githubusercontent.com/123716596/219363152-e063d30c-fe13-45b0-a3bc-a2900389e522.png)

• Path – set the path where your directory is located
• Valid users – Which users can access this file
• Read list – Who can access the directory with only read access
• Write list – Who can access the directory with write only access
• Browseable – Is it browseable or not

![image](https://user-images.githubusercontent.com/123716596/219363824-9844473b-d0c4-4d09-a974-f004e8a96a3f.png)

Now Press CTRL+C, then press y and then press enter to save.
Check all replacements are saved by type command again
![image](https://user-images.githubusercontent.com/123716596/219364360-1125f676-905a-4771-84ad-48bedf877975.png)

8. Now to check your changes type
This will show the setting of your directory. In this case, sharingFolder

![image](https://user-images.githubusercontent.com/123716596/219365543-a488b928-ac29-4ce3-9dfe-f3af5385a6e1.png)

9. Now to check the sharing of your folder between Linux and Windows OS. Press Window + R
to open run terminal and insert the ip address of your linux. To get the ip address use the
following command

ip a COMMAND 
![image](https://user-images.githubusercontent.com/123716596/219366029-4e358c45-e193-434d-9b60-376b299cc960.png)

10.0.2.15 as this is my IP ADDRESS

![image](https://user-images.githubusercontent.com/123716596/219367039-c4db68e8-63cc-4960-8225-e1e3ccf488b9.png)

Step 6: Update the Firewall Rules.
![image](https://user-images.githubusercontent.com/123716596/219368594-c1e4896f-33ae-4dd5-a4a0-2e28d2a1d164.png)

Step 7: Connect to the Shared Directory.
![image](https://user-images.githubusercontent.com/123716596/219369130-e5803c74-f099-4cf1-82f1-403647b7759d.png)

To connect to the shared directory via GUI, access the default file manager and choose the Other Locations option. Type "smb://ip-address/sharing" into the Enter server address box and select Connect The system asks for a Username and Password. Provide the requested info and click Connect again
























