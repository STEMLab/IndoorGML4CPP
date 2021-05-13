////////////////////////////////////////////////////////////////////////
//
// Node.h
//
// This file was generated by XMLSpy 2021r2sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef ALTOVA_NODE_H_INCLUDED
#define ALTOVA_NODE_H_INCLUDED

#include "AltovaXMLAPI.h"
#include "../Altova/xs-types.h"
#include "../Altova/SchemaTypes.h"

#include <comutil.h>
#import "msxml6.dll" no_implementation no_auto_exclude

ALTOVAXML_DECLSPECIFIER _bstr_t FindPrefixForNamespace(const MSXML2::IXMLDOMNodePtr& node, const _bstr_t& uri);
ALTOVAXML_DECLSPECIFIER _bstr_t GetUnusedPrefix(const MSXML2::IXMLDOMNodePtr& node, const string_type& uri, const string_type& prefixHint);

class ALTOVAXML_DECLSPECIFIER MsxmlTreeOperations
{
public:

	static void CopyAll(const MSXML2::IXMLDOMNodePtr src, MSXML2::IXMLDOMNodePtr tgt);

	class AllIterator
	{
		MSXML2::IXMLDOMNodePtr m_Current;
	public:
		operator bool() const { return m_Current != 0; }
		bool operator++() { m_Current = m_Current->nextSibling; return m_Current != 0; }
		bool operator--() { m_Current = m_Current->previousSibling; return m_Current != 0; }
		MSXML2::IXMLDOMNodePtr operator*() const { return m_Current; }

		AllIterator( const MSXML2::IXMLDOMNodePtr& start ) : m_Current( start ) {}
	};

	class MemberIterator 
	{
		AllIterator m_AllIterator;
		const altova::MemberInfo* m_MemberInfo;

	public:
		operator bool() const { return m_AllIterator; }

		bool operator++() 
		{ 
			while (++m_AllIterator)
			{
				if (IsMember(*m_AllIterator, m_MemberInfo))
					return true;
			}			
			return false;
		}

		bool operator--() 
		{ 
			while (--m_AllIterator)
			{
				if (IsMember(*m_AllIterator, m_MemberInfo))
					return true;
			}			
			return false;
		}

		MSXML2::IXMLDOMNodePtr operator*() const { return *m_AllIterator; }		

		MemberIterator(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo)
			: m_AllIterator( pNode ), m_MemberInfo( pMemberInfo )
		{
			while (m_AllIterator && !IsMember(*m_AllIterator, m_MemberInfo))
				++m_AllIterator;
		}
	};

	static bool IsEqualString(const char_type* a, const char_type* b);
	static bool IsMember(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMember);
	static bool IsValid(const MSXML2::IXMLDOMNodePtr& pNode);
	static AllIterator GetElements(const MSXML2::IXMLDOMNodePtr& pNode);
	static MemberIterator GetElements(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static void SetTextValue(const MSXML2::IXMLDOMNodePtr& pNode, const string_type& sText);
	static string_type GetTextValue(const MSXML2::IXMLDOMNodePtr& pNode);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, const _bstr_t& bValue);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, const string_type& sValue);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, bool b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, int b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, unsigned b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, __int64 b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, unsigned __int64 b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, double b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, altova::DateTime b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, altova::Duration b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, const std::vector<unsigned char>& b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, const MSXML2::IXMLDOMNodePtr& b);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo, const altova::QName& qn);
	static MSXML2::IXMLDOMNodePtr AddElement(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static MSXML2::IXMLDOMNodePtr AddElement(const MSXML2::IXMLDOMNodePtr& pNode, string_type prefix, string_type localName, string_type namespaceURI);
	static double CastToDouble(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static string_type CastToString(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static __int64 CastToInt64(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static unsigned __int64 CastToUInt64(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static unsigned CastToUInt(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static int CastToInt(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static bool CastToBool(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static altova::DateTime CastToDateTime(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static altova::Duration CastToDuration(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static std::vector<unsigned char> CastToBinary(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static altova::QName CastToQName(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* pMemberInfo);
	static MSXML2::IXMLDOMNodePtr FindAttribute(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* member);

	static MSXML2::IXMLDOMNodePtr GetParent(const MSXML2::IXMLDOMNodePtr& pNode);
	static void SetValue(const MSXML2::IXMLDOMNodePtr& pNode, const string_type& sValue);
	static void RemoveAttribute(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* member);
	static void RemoveElements(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* member);
	static void RemoveElement(const MSXML2::IXMLDOMNodePtr& pNode, const altova::MemberInfo* member, unsigned index);

	typedef MSXML2::IXMLDOMDocument2Ptr DocumentType;

	static DocumentType LoadDocument(const string_type& filename);
	static void FreeDocument(DocumentType& document);
	static void FreeDocument(MSXML2::IXMLDOMNodePtr& document);
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, bool omitXmlDecl );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM );
	static void SaveDocument( const DocumentType& document, const string_type& filename, bool prettyPrint, bool omitXmlDecl, const string_type& encoding, bool bBigEndian, bool bBOM );

	static DocumentType LoadXml(const string_type& xml);
	static DocumentType LoadFromBinary(const std::vector<unsigned char>& binary);
	static string_type SaveXml(const DocumentType& document, bool prettyPrint);
	static string_type SaveXml(const DocumentType& document, bool prettyPrint, bool omitXmlDecl);
	static std::vector<unsigned char> SaveToBinary(const DocumentType& document, bool prettyPrint);
	static std::vector<unsigned char> SaveToBinary(const DocumentType& document, bool prettyPrint, bool omitXmlDecl);
	static void SaveToBinary( std::vector<unsigned char>& result, const DocumentType& document, bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM, bool bIncludeEncoding = true );

	static DocumentType CreateDocument();

	static void AddProcessingInstruction(const MSXML2::IXMLDOMNodePtr& node, const string_type& target, const string_type& value);

	static void SetAttribute(const MSXML2::IXMLDOMNodePtr& node, const string_type& localName, const string_type& namespaceURI, const string_type& value);
	static void SetAttribute(const MSXML2::IXMLDOMNodePtr& node, const string_type& localName, const string_type& namespaceURI, const string_type& valueLocalName, const string_type& valueNamespaceURI);

protected:
	static void CorrectByteOrderAndBOM( std::vector<unsigned char>& bytes, const string_type& encoding, bool bBigEndian, bool bBOM );
	static int GetEncodingAndByteOrderFromXml( std::vector<unsigned char>& sourceBytes );
	static int GetEncodingAndByteOrderFromXml( unsigned char* sourceBytes, int sourceLength );
	static int GetUnicodeSizeFromEncodingName( const string_type& encodingIn );
	static string_type Uppercase( const string_type& str );
};


#endif // ALTOVA_NODE_H_INCLUDED
