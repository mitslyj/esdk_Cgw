#ifdef __cplusplus
extern "C" {
#endif

#ifndef __SSINCLUDEALL_H__
#define __SSINCLUDEALL_H__

#ifdef MINISIP_SUPPORTED_64BIT
/* we need align with 4 byte */
#pragma pack(4)
#endif

#include "sipheaders/sdpapi.h"
#include "sipheaders/sdpattr.h"
#include "sipheaders/sdpenums.h"
#include "sipheaders/sdpfmtp.h"
#include "sipheaders/sdpstructure.h"
#include "sipheaders/sdptypes.h"
#include "sipheaders/sigcomp.x"
#include "sipheaders/sscbbtypes.x"
#include "sipheaders/sscodec.x"
#include "sipheaders/sscorelib.x"
#include "sipheaders/ssdatatype.h"
#include "sipheaders/ssdsmapi.x"
#include "sipheaders/ssdsmmsgcloneutil.x"
#include "sipheaders/ssdsmmsgutil.x"
#include "sipheaders/ssdsmunknownhdrs.x"
#include "sipheaders/ssdsmutil.h"
#include "sipheaders/ssenums.h"
#include "sipheaders/ssenvdep.h"
#include "sipheaders/ssfrmreg.x"
#include "sipheaders/sshdrallow.h"
#include "sipheaders/sshdrauthinfo.h"
#include "sipheaders/sshdrauthrzclass.h"
#include "sipheaders/sshdrcntnttypeclass.h"
#include "sipheaders/sshdrdate.h"
#include "sipheaders/sshdrevntclass.h"
#include "sipheaders/sshdrgenparamslistclass.h"
#include "sipheaders/sshdrmimever.h"
#include "sipheaders/sshdrnumclass.h"
#include "sipheaders/sshdrprivacy.h"
#include "sipheaders/sshdrpxyauthenclass.h"
#include "sipheaders/sshdrrack.h"
#include "sipheaders/sshdrretryafterclass.h"
#include "sipheaders/sshdrserverclass.h"
#include "sipheaders/sshdrstringclass.h"
#include "sipheaders/sshdrstringgenparamsclass.h"
#include "sipheaders/sshdrtokenclass.h"
#include "sipheaders/sshdrtokengenparamsclass.h"
#include "sipheaders/sshdrurihdrclass.h"
#include "sipheaders/ssheaders.h"
#include "sipheaders/sslmcommon.h"
#include "sipheaders/sslminit.x"
#include "sipheaders/sslmlog.x"
#include "sipheaders/sslmmaintain.x"
#include "sipheaders/sslmssp.x"
#include "sipheaders/ssmessage.h"
#include "sipheaders/ssmultipartbodycodec.x"
#include "sipheaders/ssosfuncwrapper.h"
#include "sipheaders/ssrandutil.h"
#include "sipheaders/sssipbase.h"
#include "sipheaders/sstptintf.x"
#include "sipheaders/sstxntuintf.x"
#include "sipheaders/sstxnutil.x"
#include "sipheaders/sztypes.h"
#include "sipheaders/vpp.h"
#include "sipheaders/vppcommon.x"
#include "sipheaders/vpphash.x"
#include "sipheaders/vpphashutil.x"
#include "sipheaders/vppipaddr.x"
#include "sipheaders/vpplist.x"
#include "sipheaders/vppmemcp.x"
#include "sipheaders/vppmsgcb.x"
#include "sipheaders/vppset.x"
#include "sipheaders/vppstrbuf.x"
#include "sipheaders/vppstring.x"
#include "sipheaders/vpptoken.x"
#include "sipheaders/vpptypes.h"

#ifdef MINISIP_SUPPORTED_64BIT
/* restore the align type to default */
#pragma pack()
#endif

#endif
#ifdef __cplusplus
}
#endif /* __cpluscplus */