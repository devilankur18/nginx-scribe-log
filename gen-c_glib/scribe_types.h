/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef SCRIBE_TYPES_H
#define SCRIBE_TYPES_H

/* base includes */
#include <glib-object.h>
#include <thrift_struct.h>
#include <protocol/thrift_protocol.h>
/* other thrift includes */
#include "fb303_types.h"

/* custom thrift includes */

/* begin types */

enum _ResultCode {
  RESULT_CODE_OK = 0,
  RESULT_CODE_TRY_LATER = 1
};
typedef enum _ResultCode ResultCode;

/* constants */

/* struct LogEntry */
struct _LogEntry
{ 
  ThriftStruct parent; 

  /* public */
  gchar * category;
  gboolean __isset_category;
  gchar * message;
  gboolean __isset_message;
};
typedef struct _LogEntry LogEntry;

struct _LogEntryClass
{
  ThriftStructClass parent;
};
typedef struct _LogEntryClass LogEntryClass;

GType log_entry_get_type (void);
#define TYPE_LOG_ENTRY (log_entry_get_type())
#define LOG_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LOG_ENTRY, LogEntry))
#define LOG_ENTRY_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), _TYPE_LOG_ENTRY, LogEntryClass))
#define IS_LOG_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LOG_ENTRY))
#define IS_LOG_ENTRY_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_LOG_ENTRY))
#define LOG_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LOG_ENTRY, LogEntryClass))

#endif /* SCRIBE_TYPES_H */