#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnonNegativeInteger
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnonNegativeInteger



namespace indoorgmlcore
{

namespace xs
{	

class CnonNegativeInteger : public TypeBase
{
public:
	indoorgmlcore_EXPORT CnonNegativeInteger(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CnonNegativeInteger(CnonNegativeInteger const& init);
	void operator=(CnonNegativeInteger const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CnonNegativeInteger); }
	void operator= (const unsigned __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned __int64()
	{
		return CastAs<unsigned __int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnonNegativeInteger
