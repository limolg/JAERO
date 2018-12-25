/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSTemperature_H_
#define	_FANSTemperature_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSTemperatureC.h"
#include "FANSTemperatureF.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSTemperature_PR {
	FANSTemperature_PR_NOTHING,	/* No components present */
	FANSTemperature_PR_temperatureC,
	FANSTemperature_PR_temperatureF
} FANSTemperature_PR;

/* FANSTemperature */
typedef struct FANSTemperature {
	FANSTemperature_PR present;
	union FANSTemperature_u {
		FANSTemperatureC_t	 temperatureC;
		FANSTemperatureF_t	 temperatureF;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSTemperature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTemperature;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTemperature_H_ */
#include "asn_internal.h"
