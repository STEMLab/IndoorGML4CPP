#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnegativeInteger
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnegativeInteger



namespace indoorgmlcore
{

namespace xs
{	

class CnegativeInteger : public TypeBase
{
public:
	indoorgmlcore_EXPORT CnegativeInteger(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CnegativeInteger(CnegativeInteger const& init);
	void operator=(CnegativeInteger const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CnegativeInteger); }
	void operator= (const __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator __int64()
	{
		return CastAs<__int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CnegativeInteger
