//----------------------------------------------------------------------------
//
//  Copyright (c) Intel Corporation, 2003 - 2012  All Rights Reserved.
//
//  File:       CIM_Chassis.h
//
//  Contents:   The Chassis class represents the PhysicalElements that enclose other Elements and provide definable functionality, such as a desktop, processing node, UPS, disk or tape storage, or a combination of these.
//
//              This file was automatically generated from CIM_Chassis.mof,  version: 2.14.0
//
//----------------------------------------------------------------------------
#ifndef CIM_CHASSIS_H
#define CIM_CHASSIS_H 1
#include "CIM_PhysicalFrame.h"
namespace Intel
{
namespace Manageability
{
namespace Cim
{
namespace Typed 
{
	// The Chassis class represents the PhysicalElements that enclose other Elements and provide definable functionality, such as a desktop, processing node, UPS, disk or tape storage, or a combination of these.
	class CIMFRAMEWORK_API CIM_Chassis  : public CIM_PhysicalFrame
	{
	public:

		//Default constructor
		CIM_Chassis()
			: CIM_PhysicalFrame(NULL, CLASS_NAME, CLASS_NS, CLASS_NS_PREFIX, CLASS_URI)
		{
			if(_classMetaData.size() == 0)
			{
				CIM_PhysicalFrame::SetMetaData(_classMetaData);
				CimBase::SetMetaData(_classMetaData, _metadata, 9);
			}
		}

		//constructor which receives WSMan client
		CIM_Chassis(ICimWsmanClient *client)
			: CIM_PhysicalFrame(client, CLASS_NAME, CLASS_NS, CLASS_NS_PREFIX, CLASS_URI)
		{
			if(_classMetaData.size() == 0)
			{
				CIM_PhysicalFrame::SetMetaData(_classMetaData);
				CimBase::SetMetaData(_classMetaData, _metadata, 9);
			}
		}

		//Destructor
		virtual ~CIM_Chassis(){}

		// The "type" information for the object. Gettors only.
		virtual const string& ResourceURI() const { return CLASS_URI; }
		static const string& ClassResourceURI() { return CLASS_URI; }
		virtual const string& XmlNamespace() const { return CLASS_NS; }
		virtual const string& XmlPrefix() const { return CLASS_NS_PREFIX; }
		virtual const string& ObjectType() const { return CLASS_NAME; }
		static const string& ClassObjectType() { return CLASS_NAME; }

		// Class representing CIM_Chassis keys
		class CimKeys : public CIM_PhysicalFrame::CimKeys
		{
		public:
		};

		// class fields declarations

		// Optional, Integer indicating the number of power cords which must be connected to the Chassis, for all the componentry to operate.
		const unsigned short NumberOfPowerCords() const;

		// Optional, Integer indicating the number of power cords which must be connected to the Chassis, for all the componentry to operate.
		void NumberOfPowerCords(const unsigned short value); 

		// Is true if the field NumberOfPowerCords exists in the current object, otherwise is false.
		bool NumberOfPowerCordsExists() const;

		// Remove NumberOfPowerCords field.
		void RemoveNumberOfPowerCords(); 

		// Optional, Current required by the Chassis at 120V. If power is provided by the Chassis (as in the case of a UPS), this property may indicate the amperage produced, as a negative number.
		const short CurrentRequiredOrProduced() const;

		// Optional, Current required by the Chassis at 120V. If power is provided by the Chassis (as in the case of a UPS), this property may indicate the amperage produced, as a negative number.
		void CurrentRequiredOrProduced(const short value); 

		// Is true if the field CurrentRequiredOrProduced exists in the current object, otherwise is false.
		bool CurrentRequiredOrProducedExists() const;

		// Remove CurrentRequiredOrProduced field.
		void RemoveCurrentRequiredOrProduced(); 

		// Optional, Amount of heat generated by the Chassis in BTU/hour.
		const unsigned short HeatGeneration() const;

		// Optional, Amount of heat generated by the Chassis in BTU/hour.
		void HeatGeneration(const unsigned short value); 

		// Is true if the field HeatGeneration exists in the current object, otherwise is false.
		bool HeatGenerationExists() const;

		// Remove HeatGeneration field.
		void RemoveHeatGeneration(); 

		// Optional, The use of this property is deprecated in lieu of ChassisPackageType. A physical package should not have multiple form factors. Therefore, this property is being deprecated in lieu of a single value property. 
		// An enumerated, integer-valued array indicating the type of Chassis.
		const vector<unsigned short> ChassisTypes() const;

		// Optional, The use of this property is deprecated in lieu of ChassisPackageType. A physical package should not have multiple form factors. Therefore, this property is being deprecated in lieu of a single value property. 
		// An enumerated, integer-valued array indicating the type of Chassis.
		void ChassisTypes(const vector<unsigned short> &value); 

		// Is true if the field ChassisTypes exists in the current object, otherwise is false.
		bool ChassisTypesExists() const;

		// Remove ChassisTypes field.
		void RemoveChassisTypes(); 

		// Optional, The use of this property is deprecated in lieu of a single value property, ChassisTypeDescription. 
		// An array of free-form strings providing more information on the ChassisTypes array entries. Note, each entry of this array is related to the entry in ChassisTypes that is located at the same index.
		const vector<string> TypeDescriptions() const;

		// Optional, The use of this property is deprecated in lieu of a single value property, ChassisTypeDescription. 
		// An array of free-form strings providing more information on the ChassisTypes array entries. Note, each entry of this array is related to the entry in ChassisTypes that is located at the same index.
		void TypeDescriptions(const vector<string> &value); 

		// Is true if the field TypeDescriptions exists in the current object, otherwise is false.
		bool TypeDescriptionsExists() const;

		// Remove TypeDescriptions field.
		void RemoveTypeDescriptions(); 

		// Optional, ChassisPackageType indicates the physical form factor for the type of Chassis. This property may have a value when the PackageType property contains the value 3 "Chassis Frame".
		// A value of 28 "Blade Enclosure" shall indicate the Chassis is designed to contain one or more PhysicalPackage(s) of PackageType 16 "Blade" or PackageType 17 "Blade Expansion".
		const unsigned short ChassisPackageType() const;

		// Optional, ChassisPackageType indicates the physical form factor for the type of Chassis. This property may have a value when the PackageType property contains the value 3 "Chassis Frame".
		// A value of 28 "Blade Enclosure" shall indicate the Chassis is designed to contain one or more PhysicalPackage(s) of PackageType 16 "Blade" or PackageType 17 "Blade Expansion".
		void ChassisPackageType(const unsigned short value); 

		// Is true if the field ChassisPackageType exists in the current object, otherwise is false.
		bool ChassisPackageTypeExists() const;

		// Remove ChassisPackageType field.
		void RemoveChassisPackageType(); 

		// Optional, A string providing more information on the ChassisPackageType.
		const string ChassisTypeDescription() const;

		// Optional, A string providing more information on the ChassisPackageType.
		void ChassisTypeDescription(const string &value); 

		// Is true if the field ChassisTypeDescription exists in the current object, otherwise is false.
		bool ChassisTypeDescriptionExists() const;

		// Remove ChassisTypeDescription field.
		void RemoveChassisTypeDescription(); 

		// Optional, MultipleSystemSupport indicates whether or not this chassis supports multiple systems, for example server blades.
		const unsigned short MultipleSystemSupport() const;

		// Optional, MultipleSystemSupport indicates whether or not this chassis supports multiple systems, for example server blades.
		void MultipleSystemSupport(const unsigned short value); 

		// Is true if the field MultipleSystemSupport exists in the current object, otherwise is false.
		bool MultipleSystemSupportExists() const;

		// Remove MultipleSystemSupport field.
		void RemoveMultipleSystemSupport(); 

		// Optional, RackMountable indicates whether or not the chassis is Rack Mountable.
		const unsigned short RackMountable() const;

		// Optional, RackMountable indicates whether or not the chassis is Rack Mountable.
		void RackMountable(const unsigned short value); 

		// Is true if the field RackMountable exists in the current object, otherwise is false.
		bool RackMountableExists() const;

		// Remove RackMountable field.
		void RemoveRackMountable(); 

		 // Function used by the factory
		static CimBase *CreateFromCimObject(const CimObject &object);

		static vector<shared_ptr<CIM_Chassis> > Enumerate(ICimWsmanClient *client, const CimKeys &keys = CimKeys()) ;

		// Overloaded delete which supplies the internal resourceURI
		static void Delete(ICimWsmanClient *client, const CimKeys &keys = CimKeys()) ;

		using CimBase::Delete;

	protected:
		 // Protected constructor to be used by derived classes
		CIM_Chassis(ICimWsmanClient *client, const string &class_name,
			const string &class_ns, const string &prefix, const string &uri): CIM_PhysicalFrame(client, class_name, class_ns, prefix, uri)
		{
			if(_classMetaData.size() == 0)
			{
				CIM_PhysicalFrame::SetMetaData(_classMetaData);
				CimBase::SetMetaData(_classMetaData, _metadata, 9);
			}
		}
		 // Protected constructor which receives CimObject
		CIM_Chassis(const CimObject &object)
			: CIM_PhysicalFrame(object)
		{
			if(_classMetaData.size() == 0)
			{
				CIM_PhysicalFrame::SetMetaData(_classMetaData);
				CimBase::SetMetaData(_classMetaData, _metadata, 9);
			}
		}
		// Called by derived classes
		void SetMetaData(vector<CimFieldAttribute>& childMetaData)
		{
			CIM_PhysicalFrame::SetMetaData(childMetaData);
			CimBase::SetMetaData(childMetaData, _metadata, 9);
		}
		const vector<CimFieldAttribute> &GetMetaData() const;
	private:
		static const CimFieldAttribute _metadata[];
		static const string CLASS_NAME;
		static const string CLASS_URI;
		static const string CLASS_NS;
		static const string CLASS_NS_PREFIX;
		static vector<CimFieldAttribute> _classMetaData;
	};

} // close namespace Typed
} // close namespace Cim
} // close namespace Manageability
} // close namespace Intel
#endif // CIM_CHASSIS_H
