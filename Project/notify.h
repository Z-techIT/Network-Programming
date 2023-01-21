#ifndef __NOTIFY_H__
#define __NOTIFY_H__

typedef enum {
  N_INPUT_EMPTY,
  N_INPUT_INVALID,
  N_INPUT_TOO_LONG,
  N_EMAIL_INVALID,

  N_DATABASE_INSERT_SUCCESS,
  N_DATABASE_CONNECT_FAILED,
  N_DATABASE_INSERT_FAILED,
  N_USERNAME_ALREADY_EXISTS,
  N_ACCOUNT_WRONG,
  N_QUERY_FAILED,
  N_SIGNIN_SUCCESS,

  N_SERVER_NOT_FOUND,
  N_INIT_CONNECT_FAILED,
  N_SEND_REQUEST_FAILED,
  N_REQUEST_TOO_LONG,
  N_SERVER_CREATE_SOCKET_FAILED,
  N_SERVER_BIND_SOCKET_FAILED,
  N_SERVER_LISTEN_CONNECTION_FAILED,
  N_REQUEST_REJECTED,

} Notify;

void notify(char *, Notify);

#endif