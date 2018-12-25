/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FANSPosition.h"

static asn_per_constraints_t asn_PER_type_FANSPosition_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_FANSPosition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPosition, choice.fixName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFixName,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fixName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPosition, choice.navaid),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSNavaid,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"navaid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPosition, choice.airport),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAirport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"airport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPosition, choice.latitudeLongitude),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSLatitudeLongitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitudeLongitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPosition, choice.placeBearingDistance),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSPlaceBearingDistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"placeBearingDistance"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FANSPosition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* placeBearingDistance */
};
static asn_CHOICE_specifics_t asn_SPC_FANSPosition_specs_1 = {
	sizeof(struct FANSPosition),
	offsetof(struct FANSPosition, _asn_ctx),
	offsetof(struct FANSPosition, present),
	sizeof(((struct FANSPosition *)0)->present),
	asn_MAP_FANSPosition_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FANSPosition = {
	"FANSPosition",
	"FANSPosition",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_FANSPosition_constr_1,
	asn_MBR_FANSPosition_1,
	5,	/* Elements count */
	&asn_SPC_FANSPosition_specs_1	/* Additional specs */
};

