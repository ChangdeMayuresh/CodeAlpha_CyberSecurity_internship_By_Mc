#!/bin/bash

# Task 4: Network Intrusion Detection System Setup (Suricata via Docker)

echo "Starting Suricata IDS..."

# Step 1: Create the log directory on the host machine if it doesn't exist
sudo mkdir -p /var/log/suricata

# Step 2: Run Suricata in a Docker container, attached to the host network (wlan0)
# It uses the local.rules file to detect potential threats.
sudo docker run --rm --net=host \
  -v /etc/suricata/rules:/etc/suricata/rules \
  -v /var/log/suricata:/var/log/suricata \
  jasonish/suricata \
  -i wlan0 -S /etc/suricata/rules/local.rules &

echo "Suricata is running in the background."
echo "To monitor network traffic continuously for alerts, open a new terminal and run:"
echo "sudo tail -f /var/log/suricata/fast.log"
