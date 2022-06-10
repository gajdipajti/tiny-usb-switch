#!/bin/bash

# Help
Help()
{
    # Display Help
    echo "Tiny USB Switch control script."
    echo
    echo "Syntax: tinyusb [-y|n|p|q|r]"
    echo "options:"
    echo "h	this help"
    echo "y     turn on"
    echo "n     turn off"
    echo "p     02 second restart"
    echo "q     10 second restart"
    echo "r     30 second restart"
    echo
}

# Main program

stty -F /dev/ttyUSB0 9600

while getopts ":hynpqr" option; do
    case $option in
	h) # Display help
	    Help
	    exit;;
	y) # Turn on
	    echo 'y' > /dev/ttyUSB0;
	    echo "Turning on USB Switch.";
	    exit;;
	n) # Turn off
	    echo 'n' > /dev/ttyUSB0;
	    echo "Turning off USB Switch.";
	    exit;;
	p) # Reset 02 sec
	    echo 'p' > /dev/ttyUSB0;
	    echo "Resetting USB Switch 02 sec.";
	    sleep 2;
	    echo "Done!";
	    exit;;
	q) # Reset 10 sec
	    echo 'q' > /dev/ttyUSB0;
	    echo "Resetting USB Switch 10 sec.";
	    sleep 10;
	    echo "Done!";
	    exit;;
	r) # Reset 30 sec
	    echo 'r' > /dev/ttyUSB0;
	    echo "Resetting USB Switch 30 sec.";
	    sleep 30;
	    echo "Done!";
	    exit;;
	\?) # Invalid option
	    echo "Error: Invalid option"
	    exit;;
    esac
done
