#ifndef _IP6T_REJECT_H
#define _IP6T_REJECT_H

enum ip6t_reject_with {
	IP6T_ICMP6_NO_ROUTE,
	IP6T_ICMP6_ADM_PROHIBITED,
	IP6T_ICMP6_NOT_NEIGHBOUR,
	IP6T_ICMP6_ADDR_UNREACH,
	IP6T_ICMP6_PORT_UNREACH,
	IP6T_ICMP6_ECHOREPLY,
	IP6T_TCP_RESET,
	IP6T_ICMP6_SRC_ADDR_FAILED  //Foxconn added Bernie 2014/12/10 for code 5
};

struct ip6t_reject_info {
	u_int32_t	with;	/* reject type */
};

#endif /*_IP6T_REJECT_H*/
