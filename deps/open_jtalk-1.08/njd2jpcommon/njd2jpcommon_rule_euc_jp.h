/* ----------------------------------------------------------------- */
/*           The Japanese TTS System "Open JTalk"                    */
/*           developed by HTS Working Group                          */
/*           http://open-jtalk.sourceforge.net/                      */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2008-2014  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the HTS working group nor the names of its  */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission.   */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#ifndef NJD2JPCOMMON_RULE_H
#define NJD2JPCOMMON_RULE_H

#ifdef __cplusplus
#define NJD2JPCOMMON_RULE_H_START extern "C" {
#define NJD2JPCOMMON_RULE_H_END   }
#else
#define NJD2JPCOMMON_RULE_H_START
#define NJD2JPCOMMON_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD2JPCOMMON_RULE_H_START;

static const char *njd2jpcommon_pos_list[] = {
   "����¾", "����", "*", "*", "����¾",
   "�ե��顼", "*", "*", "*", "��ư��",
   "��ư��", "*", "*", "*", "��ư��",
   "����", "����ե��٥å�", "*", "*", "����",
   "����", "����", "*", "*", "����",
   "����", "��̳�", "*", "*", "����",
   "����", "�����", "*", "*", "����",
   "����", "����", "*", "*", "����",
   "����", "����", "*", "*", "����",
   "����", "����", "*", "*", "����",
   "���ƻ�", "��Ω", "*", "*", "���ƻ�",
   "���ƻ�", "����", "*", "*", "������-���ƻ�Ū",
   "���ƻ�", "��Ω", "*", "*", "���ƻ�",
   "����", "�ʽ���", "����", "*", "����-�ʽ���",
   "����", "�ʽ���", "����", "*", "����-�ʽ���",
   "����", "�ʽ���", "Ϣ��", "*", "����-�ʽ���",
   "����", "������", "*", "*", "����-������",
   "����", "������", "*", "*", "����-������",
   "����", "��³����", "*", "*", "����-��³����",
   "����", "�ü�", "*", "*", "����-����¾",
   "����", "���첽", "*", "*", "����-����¾",
   "����", "������", "*", "*", "����-������",
   "����", "�����졿��Ω���졿������", "*", "*", "����-����¾",
   "����", "��Ω����", "*", "*", "����-����¾",
   "����", "Ϣ�β�", "*", "*", "����-����¾",
   "��ư��", "*", "*", "*", "��ư��",
   "��³��", "*", "*", "*", "��³��",
   "��Ƭ��", "���ƻ���³", "*", "*", "��Ƭ��",
   "��Ƭ��", "����³", "*", "*", "��Ƭ��",
   "��Ƭ��", "ư����³", "*", "*", "��Ƭ��",
   "��Ƭ��", "̾����³", "*", "*", "��Ƭ��",
   "ư��", "��Ω", "*", "*", "ư��",
   "ư��", "����", "*", "*", "������-ư��Ū",
   "ư��", "��Ω", "*", "*", "ư��-��Ω",
   "����", "*", "*", "*", "����",
   "����", "����", "*", "*", "����",
   "����", "��������³", "*", "*", "����",
   "̾��", "������³", "*", "*", "̾��-������³",
   "̾��", "�ʥ����ƻ�촴", "*", "*", "̾��-����̾��",
   "̾��", "����", "*", "*", "̾��-����̾��",
   "̾��", "����ʸ����", "*", "*", "̾��-����̾��",
   "̾��", "����ư��촴", "*", "*", "������",
   "̾��", "��ͭ̾��", "����", "*", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "��̾", "����", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "��̾", "��", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "��̾", "̾", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "�ȿ�", "*", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "�ϰ�", "����", "̾��-��ͭ̾��",
   "̾��", "��ͭ̾��", "�ϰ�", "��", "̾��-��ͭ̾��",
   "̾��", "��", "*", "*", "̾��-����",
   "̾��", "��³��Ū", "*", "*", "̾��-����̾��",
   "̾��", "����", "������³", "*", "������-̾��Ū",
   "̾��", "����", "����", "*", "������-̾��Ū",
   "̾��", "����", "����ư��촴", "*", "������-������Ū",
   "̾��", "����", "������", "*", "������-̾��Ū",
   "̾��", "����", "��ư��촴", "*", "������-̾��Ū",
   "̾��", "����", "��̾", "*", "������-̾��Ū",
   "̾��", "����", "�ϰ�", "*", "������-̾��Ū",
   "̾��", "����", "�ü�", "*", "������-̾��Ū",
   "̾��", "����", "�����ǽ", "*", "������-̾��Ū",
   "̾��", "��̾��", "����", "*", "��̾��",
   "̾��", "��̾��", "����", "*", "��̾��",
   "̾��", "ư����ΩŪ", "*", "*", "̾��-����̾��",
   "̾��", "�ü�", "��ư��촴", "*", "̾��-����̾��",
   "̾��", "��Ω", "����", "*", "̾��-��Ω",
   "̾��", "��Ω", "����ư��촴", "*", "̾��-��Ω",
   "̾��", "��Ω", "��ư��촴", "*", "̾��-��Ω",
   "̾��", "��Ω", "�����ǽ", "*", "̾��-��Ω",
   "̾��", "��Ω", "*", "*", "̾��-��Ω",
   "̾��", "�����ǽ", "*", "*", "̾��-����̾��",
   "Ϣ�λ�", "*", "*", "*", "Ϣ�λ�",
   NULL, NULL, NULL, NULL, NULL
};

static const char *njd2jpcommon_cform_list[] = {
   "*", "*",
   "������³", "����¾",
   "���ش��ܷ�", "���ܷ�",
   "�����", "�����",
   "�������", "�����",
   "�������", "�����",
   "���ܷ�", "���ܷ�",
   "���ܷ�-¥����", "���ܷ�",
   "������ܷ�", "���ܷ�",
   "�θ���³", "Ϣ�η�",
   "�θ���³�ü�", "Ϣ�η�",
   "�θ���³�ü죲", "Ϣ�η�",
   "ʸ����ܷ�", "���ܷ�",
   "̤������³", "̤����",
   "̤������³", "̤����",
   "̤�������³", "̤����",
   "̤����", "̤����",
   "̤���ü�", "̤����",
   "̿���", "̿���",
   "̿���", "̿���",
   "̿����", "̿���",
   "̿�����", "̿���",
   "Ϣ�ѥ�������³", "Ϣ�ѷ�",
   "Ϣ�ѥ���³", "Ϣ�ѷ�",
   "Ϣ�ѥ���³", "Ϣ�ѷ�",
   "Ϣ�ѥ���³", "Ϣ�ѷ�",
   "Ϣ�ѥ���³", "Ϣ�ѷ�",
   "Ϣ�ѷ�", "Ϣ�ѷ�",
   NULL, NULL
};

static const char *njd2jpcommon_ctype_list[] = {
   "*", "*",
   "���ѡ�����", "�����ѳ�",
   "���ѡ����", "�����ѳ�",
   "���ѡ��ݥ���", "�����ѳ�",
   "���ѡ��ݥ���", "�����ѳ�",
   "���ѡ�����", "�����ѳ�",
   "����", "����ѳ�",
   "����", "����",
   "���ʡ������", "����",
   "���ʡ�����", "����",
   "���󡦥���", "����",
   "���󡦥���", "����",
   "���󡦥���", "����",
   "���󡦥���", "����",
   "���󡦥Ϲ�", "����",
   "���󡦥޹�", "����",
   "������", "����",
   "���ƻ졦��������", "���ƻ�",
   "���ƻ졦����", "���ƻ�",
   "���ƻ졦����", "���ƻ�",
   "���ʡ����ԥ�����", "����",
   "���ʡ�����¥����", "����",
   "���ʡ�����¥���إ楯", "����",
   "���ʡ�����", "����",
   "���ʡ�����", "����",
   "���ʡ�����", "����",
   "���ʡ��ʹ�", "����",
   "���ʡ��й�", "����",
   "���ʡ��޹�", "����",
   "���ʡ����", "����",
   "���ʡ���ԥ���", "����",
   "���ʡ�����ü�", "����",
   "���ʡ���ԥ�����", "����",
   "���ʡ����¥����", "����",
   "���ʡ�����", "����",
   "���ʡ�����", "����",
   "���ʡ��Ϲ�", "����",
   "���ʡ��й�", "����",
   "���󡦥���", "����",
   "���󡦥Ϲ�", "����",
   "�ü졦����", "��ư��",
   "�ü졦��", "��ư��",
   "�ü졦����", "��ư��",
   "�ü졦��", "��ư��",
   "�ü졦�ǥ�", "��ư��",
   "�ü졦�ʥ�", "��ư��",
   "�ü졦��", "��ư��",
   "�ü졦�ޥ�", "��ư��",
   "�ü졦��", "��ư��",
   "���Ѳ���", "���Ѳ�",
   "ʸ�졦��", "ʸ���ư��",
   "ʸ�졦����", "ʸ���ư��",
   "ʸ�졦���ȥ�", "ʸ���ư��",
   "ʸ�졦�ʥ�", "ʸ���ư��",
   "ʸ�졦�٥�", "ʸ���ư��",
   "ʸ�졦�ޥ�", "ʸ���ư��",
   "ʸ�졦��", "ʸ���ư��",
   "ʸ�졦��", "ʸ���ư��",
   NULL, NULL
};

NJD2JPCOMMON_RULE_H_END;

#endif                          /* !NJD2JPCOMMON_RULE_H */