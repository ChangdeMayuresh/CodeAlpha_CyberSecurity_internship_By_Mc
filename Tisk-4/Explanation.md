# 🛡️ Task 4: Network Intrusion Detection System (IDS)

## 📌 Objective
Set up a network-based intrusion detection system using tools like Snort or Suricata to monitor network traffic continuously for potential threats.

## 🛠️ Infrastructure Setup
- **IDS Tool Used:** Suricata
- **Environment:** Docker container on Linux (CachyOS)
- **Interface Monitored:** `wlan0` (Host Network)

## 🚨 Configuration & Rules
To detect suspicious or malicious activity, a custom rule was configured in the `local.rules` file:
```text
alert icmp any any -> any any (msg:"ICMP Ping Detected!"; sid:1000001; rev:1;)
