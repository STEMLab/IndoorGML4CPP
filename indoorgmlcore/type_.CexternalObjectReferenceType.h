#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CexternalObjectReferenceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CexternalObjectReferenceType



namespace indoorgmlcore
{

class CexternalObjectReferenceType : public ElementType
{
public:
	indoorgmlcore_EXPORT CexternalObjectReferenceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CexternalObjectReferenceType(CexternalObjectReferenceType const& init);
	void operator=(CexternalObjectReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CexternalObjectReferenceType); }
	MemberElement<xs::CstringType, _altova_mi_altova_CexternalObjectReferenceType_altova_name> name;
	struct name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CanyURIType, _altova_mi_altova_CexternalObjectReferenceType_altova_uri> uri;
	struct uri { typedef Iterator<xs::CanyURIType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CexternalObjectReferenceType
