#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDataBlockType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDataBlockType



namespace indoorgmlcore
{

namespace gml
{	

class CDataBlockType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDataBlockType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDataBlockType(CDataBlockType const& init);
	void operator=(CDataBlockType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDataBlockType); }
	MemberElement<gml::CAssociationRoleType, _altova_mi_gml_altova_CDataBlockType_altova_rangeParameters> rangeParameters;
	struct rangeParameters { typedef Iterator<gml::CAssociationRoleType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CDataBlockType_altova_tupleList> tupleList;
	struct tupleList { typedef Iterator<gml::CCoordinatesType> iterator; };
	MemberElement<gml::CdoubleOrNilReasonListType, _altova_mi_gml_altova_CDataBlockType_altova_doubleOrNilReasonTupleList> doubleOrNilReasonTupleList;
	struct doubleOrNilReasonTupleList { typedef Iterator<gml::CdoubleOrNilReasonListType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDataBlockType
