//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasDisplayStrings;
    NSString *_identifier;
    NSString *_name;
    NSString *_OID;
    unsigned long long _type;
    NSArray *_synonyms;
}

+ (id)externalCodeSystems;
+ (_Bool)supportsSecureCoding;
+ (id)adHocConceptSystem;
+ (id)unknownSystem;
+ (id)textSystem;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRProcedureStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)ICD10USSystem;
+ (id)ICD10System;
+ (id)NDCSystem;
+ (id)CVXSystem;
+ (id)UCUMSystem;
+ (id)RxNormCodeSystem;
+ (id)SNOMEDCodeSystem;
+ (id)LOINCCodeSystem;
+ (id)systemWithSystemDefinition:(CDStruct_b04166ad)arg1;
+ (id)codeSystemWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDisplayStrings; // @synthesize hasDisplayStrings=_hasDisplayStrings;
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCustomIdentifier:(id)arg1;
- (long long)codingSystemOntologyIdentifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 OID:(id)arg3 type:(unsigned long long)arg4 synonyms:(id)arg5 hasDisplayStrings:(_Bool)arg6;

@end

