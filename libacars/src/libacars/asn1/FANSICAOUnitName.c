/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FANSICAOUnitName.h"

static asn_TYPE_member_t asn_MBR_FANSICAOUnitName_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSICAOUnitName, iCAOFacilityIdentification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSICAOFacilityIdentification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iCAOFacilityIdentification"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSICAOUnitName, iCAOFacilityFunction),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FANSICAOFacilityFunction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iCAOFacilityFunction"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSICAOUnitName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSICAOUnitName_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* iCAOFacilityFunction */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iCAOfacilitydesignation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* iCAOfacilityname */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSICAOUnitName_specs_1 = {
	sizeof(struct FANSICAOUnitName),
	offsetof(struct FANSICAOUnitName, _asn_ctx),
	asn_MAP_FANSICAOUnitName_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSICAOUnitName = {
	"FANSICAOUnitName",
	"FANSICAOUnitName",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FANSICAOUnitName_tags_1,
	sizeof(asn_DEF_FANSICAOUnitName_tags_1)
		/sizeof(asn_DEF_FANSICAOUnitName_tags_1[0]), /* 1 */
	asn_DEF_FANSICAOUnitName_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSICAOUnitName_tags_1)
		/sizeof(asn_DEF_FANSICAOUnitName_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSICAOUnitName_1,
	2,	/* Elements count */
	&asn_SPC_FANSICAOUnitName_specs_1	/* Additional specs */
};

