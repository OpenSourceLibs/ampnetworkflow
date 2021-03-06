/**
 @brief AMP Device Flow Control
        Copyright 2015-2018 Cisco Systems
 @author Craig Davison <crdaviso@cisco.com>
 @date 2015 Feb 6
*/

#ifndef AMPNETWORKFLOW_H
#define AMPNETWORKFLOW_H

/* generic netlink - version number for our protocol */
#define AMP_NKE_GENL_VERSION 6

/* generic netlink - unique family name
   max GENL_NAMSIZ (16) bytes */
#define AMP_NKE_GENL_FAM_NAME "csco-amp-nke"

typedef enum {
    AMP_NKE_SK_OP_CONNECT,
    AMP_NKE_SK_OP_ACCEPT,
    AMP_NKE_SK_OP_SEND,
    AMP_NKE_SK_OP_RECV,
    AMP_NKE_SK_OP_RELEASE,
} amp_nke_sk_op_t;

/* generic netlink - commands */
enum {
    AMP_NKE_CMD_UNSPEC,
    AMP_NKE_CMD_HELLO,
    AMP_NKE_CMD_SET_MONITORING_FOR_PID,
    AMP_NKE_CMD_FORGET_MONITORING_FOR_PID,
    AMP_NKE_CMD_SET_OPTS,
    AMP_NKE_CMD_RESET_MONITORING,
    AMP_NKE_CMD_DUMP_ACCOUNTING,
    AMP_NKE_CMD_ACTION_ALLOW,
    AMP_NKE_CMD_ACTION_DETECT,
    AMP_NKE_CMD_ACTION_UNCHANGED,
    AMP_NKE_CMD_REC_SK_OP,
    AMP_NKE_CMD_REC_DETECT,
    AMP_NKE_CMD_REC_END,
    AMP_NKE_CMD_REC_HELLO,
};

/* generic netlink - attributes */
enum {
    AMP_NKE_ATTR_UNSPEC,
    AMP_NKE_ATTR_SET_SEND_LIMIT,
    AMP_NKE_ATTR_IGNORE_IPV6,
    AMP_NKE_ATTR_IGNORE_LOOPBACK,
    AMP_NKE_ATTR_LOG_LEVEL,
    AMP_NKE_ATTR_PID,
    AMP_NKE_ATTR_CONN_LIMIT,
    AMP_NKE_ATTR_TIME_LIMIT,
    AMP_NKE_ATTR_CACHE_TTL_MALICIOUS,
    AMP_NKE_ATTR_CACHE_TTL_CLEAN,
    AMP_NKE_ATTR_CACHE_MAX_SIZE,
    AMP_NKE_ATTR_FLOW_REMOTE_SOCKADDR,
    AMP_NKE_ATTR_REMOTE_CLASSIFICATION,
    AMP_NKE_ATTR_DETECTION_NAME,
    AMP_NKE_ATTR_CACHE_REMOTE,
    AMP_NKE_ATTR_REC_PID,
    AMP_NKE_ATTR_REC_UID,
    AMP_NKE_ATTR_REC_FILENAME,
    AMP_NKE_ATTR_REC_FLOW_LOCAL_SOCKADDR,
    AMP_NKE_ATTR_REC_FLOW_REMOTE_SOCKADDR,
    AMP_NKE_ATTR_REC_FLOW_PROTOCOL,
    AMP_NKE_ATTR_REC_PAYLOAD,
    AMP_NKE_ATTR_REC_PAYLOAD_SEQNUM,
    AMP_NKE_ATTR_REC_SOCK_ID,
    AMP_NKE_ATTR_REC_SK_OP,
    AMP_NKE_ATTR_REC_REMOTE_CLASSIFICATION,
    AMP_NKE_ATTR_REC_DETECTION_NAME,
    AMP_NKE_ATTR_PAD, /* Needed on kernels >= 4.7.0 (nla_put_u64_64bit) */
    /* last entry: */
    __AMP_NKE_ATTR_COUNT
};

#define AMP_NKE_ATTR_COUNT (__AMP_NKE_ATTR_COUNT - 1)

#endif

