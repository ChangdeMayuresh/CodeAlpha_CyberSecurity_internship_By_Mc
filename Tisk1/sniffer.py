from scapy.all import sniff, IP, TCP, UDP

def process_packet(packet):
    # Check if the packet has an IP layer
    if IP in packet:
        ip_src = packet[IP].src
        ip_dst = packet[IP].dst

        # Determine if it's TCP or UDP
        proto_name = "Unknown"
        if TCP in packet:
            proto_name = "TCP"
        elif UDP in packet:
            proto_name = "UDP"

        # Display the extracted information
        print(f"Source IP: {ip_src} --> Destination IP: {ip_dst} | Protocol: {proto_name}")

# Start sniffing on the network interface (captures 10 packets for testing)
print("Starting network sniffer...")
sniff(prn=process_packet, count=10)
