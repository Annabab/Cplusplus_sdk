#ifndef __QCLOUD_SIGN_H__
#define __QCLOUD_SIGN_H__

#include <string>
#include "qcloud_sign_const.h"

/*
 * @func    �����ǩ������,APP����,��Ч��expired��ʹ��
 * @param   appid       ��Ѷ��APPID
 * @param   secret_id   Qcloud�����뵽����Կid
 * @param   secret_key  Qcloud�����뵽����Կkey
 * @param   expired     ����ʱ��(����ʱ��)
 * @param   userid      ҵ��û���˺���ϵ��NULL
 * @param   sign
 * �������,����õ���ǩ��ֵ
 * @return  0�ɹ� <0ʧ��
*/
int qc_app_sign(unsigned int appid, const std::string &secret_id,
                const std::string &secret_key, unsigned int expired,
                const std::string &userid, std::string &sign);

/*
 * @func    �����ǩ������,�ӿڼ���,����������Ч
 * @param   appid       ��Ѷ��APPID
 * @param   secret_id   Qcloud�����뵽����Կid
 * @param   secret_key  Qcloud�����뵽����Կkey
 * @param   userid      ҵ��û���˺���ϵ��NULL
 * @param   url         ���󶨾����������NULL
 * @param   sign
 * �������,����õ���ǩ��ֵ
 * @return  0�ɹ� <0ʧ��
*/
int qc_app_sign_once(unsigned int appid, const std::string &secret_id,
                     const std::string &secret_key, const std::string &userid,
                     const std::string &url, std::string &sign);

#endif
