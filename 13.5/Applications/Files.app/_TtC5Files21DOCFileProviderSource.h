//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/DOCDocumentSource.h>

@class FPProviderDomain, MISSING_TYPE, NSArray, NSString, UIImage, _TtC5Files16DOCActionManager;

@interface _TtC5Files21DOCFileProviderSource : DOCDocumentSource
{
    MISSING_TYPE *providerDomain;
    MISSING_TYPE *dropAction;
    MISSING_TYPE *isProviderDomainEnabled;
    MISSING_TYPE *$__lazy_storage_$_actionManager;
    MISSING_TYPE *$__lazy_storage_$_containingApplicationIdentifier;
    MISSING_TYPE *$__lazy_storage_$__displayName;
    MISSING_TYPE *$__lazy_storage_$__providerName;
    MISSING_TYPE *$__lazy_storage_$__domainName;
    MISSING_TYPE *$__lazy_storage_$__icon;
    MISSING_TYPE *isEjectable;
    MISSING_TYPE *requiresCustomEnumerationProperties;
    MISSING_TYPE *defaultSorting;
    MISSING_TYPE *sortingModes;
    MISSING_TYPE *availableDisplayModes;
    MISSING_TYPE *errorCount;
    MISSING_TYPE *type;
}

+ (id)createSourceFrom:(id)arg1 with:(id)arg2;
+ (id)createSpotlightSources;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool isiCloudBased;
- (_Bool)isValidForConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) _Bool appearsInMoveUI;
@property(nonatomic, readonly) NSArray *supportedSearchFilters;
@property(nonatomic, readonly) unsigned long long status;
@property(nonatomic, readonly) _Bool isAvailableSystemWide;
@property(nonatomic) _Bool isEjectable; // @synthesize isEjectable;
@property(nonatomic, retain) UIImage *icon;
@property(nonatomic, copy) NSString *domainName;
@property(nonatomic, copy) NSString *providerName;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, retain) _TtC5Files16DOCActionManager *actionManager;
@property(nonatomic, readonly) FPProviderDomain *providerDomain; // @synthesize providerDomain;

@end

