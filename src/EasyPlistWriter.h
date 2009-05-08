#ifndef __EASYPLISTWRITER_H__
#define __EASYPLISTWRITER_H__

#include "wx/wxprec.h" // For compilers that support precompilation, includes "wx/wx.h".

class TiXmlElement;
class TiXmlDocument;

class EasyPlistWriter
{
public:
	EasyPlistWriter(void);
	~EasyPlistWriter(void);

	void AddKey(TiXmlElement* parent, const char* key);
	void AddString(TiXmlElement* parent, const char* key, const char* value);
	void AddList(TiXmlElement* parent, const char* key, const wxArrayString& list);
	TiXmlElement* AddDict(TiXmlElement* parent, const char* key);

private:
	TiXmlDocument* m_doc;
	TiXmlElement* m_rootDict;
};

#endif // __EASYPLISTWRITER_H__
