# 🕵️‍♂️ Task 1: Basic Network Sniffer

## 📌 Objective
Build a Python program to capture network traffic packets and analyze their structure to understand data flow and protocols[cite: 1].

## 🛠️ Tools & Libraries Used
- **Language:** Python 3
- **Library:** `scapy` (for packet capturing and analysis)[cite: 1]

## 📝 Step-by-Step Code Explanation

**1. Importing Required Modules**
The program starts by importing the necessary components from the `scapy` library (`sniff`, `IP`, `TCP`, `UDP`). These allow the script to intercept and read network layers.

**2. Packet Processing Function (`process_packet`)**
This function analyzes each packet captured by the sniffer[cite: 1]:
- **IP Layer Check:** It first verifies if the packet contains an IP layer.
- **Extracting IPs:** If valid, it extracts and stores the **Source IP** and **Destination IP** addresses[cite: 1].
- **Protocol Identification:** It checks the packet's layers to determine whether the data is being sent via the **TCP** or **UDP** protocol[cite: 1].

**3. Displaying the Output**
The extracted data is formatted into a clean, readable string and printed to the terminal, displaying useful information like `Source IP --> Destination IP | Protocol`[cite: 1].

**4. Starting the Sniffer**
The `sniff()` function is called to begin listening on the active network interface. For testing purposes, the `count=10` parameter is used to capture exactly 10 packets before stopping the program.

## 🚀 How to Run the Project (Linux/CachyOS)

**Step 1: Install Dependencies**
Install the Scapy library using the native package manager:
```bash
sudo pacman -S python-scapy
