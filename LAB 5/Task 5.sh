#!/bin/bash

# Prompt the user for the email addresses
read -p "Enter the email address for 'TO': " to_email
read -p "Enter the email address for 'FROM': " from_email

# Prompt the user for the subject
read -p "Enter the subject: " subject

# Prompt the user for the message body
read -p "Enter the message body: " message_body

# Print out the information
echo "TO: $to_email"
echo "FROM: $from_email"
echo "SUBJECT: $subject"
echo "MESSAGE BODY:"
echo "$message_body"
