#ifndef SR_HANDLE_IP_H
#define SR_HANDLE_IP_H

// General handling method
void sr_handle_ip(struct sr_instance* sr, uint8_t *packet, unsigned int len, struct sr_if *iface);

// Handle all IP datagrams meant for router
void sr_handle_ip_rec(struct sr_instance *sr, uint8_t *packet, unsigned int len, struct sr_if *iface);

int sr_modify_and_send_icmp(struct sr_instance *sr, uint8_t icmp_type, uint8_t icmp_code, uint8_t *packet, int len, struct sr_if *iface);

int sr_send_icmp_to(struct sr_instance *sr, uint8_t *receiver, uint8_t icmp_type, uint8_t icmp_code, struct sr_if *iface);

#endif
