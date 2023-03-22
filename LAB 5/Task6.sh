#!/bin/bash

# Prompt the user for the email addresses
read -p "Enter the email address for 'TO': " to_email
read -p "Enter the email address for 'FROM': " from_email

# Prompt the user for the subject
read -p "Enter the subject: " subject

# Prompt the user for the message body
read -p "Enter the message body: " message_body

# Send the email using PHP and Apache
echo "<?php mail('$to_email', '$subject', '$message_body', 'From: $from_email'); ?>" > send_email.php
sudo cp send_email.php /var/www/html/send_email.php
sudo chown www-data:www-data /var/www/html/send_email.php
sudo chmod 755 /var/www/html/send_email.php
curl http://localhost/send_email.php

# Clean up the temporary PHP script
sudo rm /var/www/html/send_email.php

