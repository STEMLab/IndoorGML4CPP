#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CExternalReferenceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CExternalReferenceType



namespace indoorgmlcore
{

class CExternalReferenceType : public ElementType
{
public:
	indoorgmlcore_EXPORT CExternalReferenceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CExternalReferenceType(CExternalReferenceType const& init);
	void operator=(CExternalReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternalReferenceType); }
	MemberElement<xs::CanyURIType, _altova_mi_altova_CExternalReferenceType_altova_informationSystem> informationSystem;
	struct informationSystem { typedef Iterator<xs::CanyURIType> iterator; };
	MemberElement<CexternalObjectReferenceType, _altova_mi_altova_CExternalReferenceType_altova_externalObject> externalObject;
	struct externalObject { typedef Iterator<CexternalObjectReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CExternalReferenceType
