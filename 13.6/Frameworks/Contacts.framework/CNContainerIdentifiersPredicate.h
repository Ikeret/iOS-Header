//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContainerPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContainerIdentifiersPredicate : CNPredicate <CNCDContainerPredicate>
{
    NSArray *_identifiers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)cn_persistenceFilterRequest;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;
- (id)initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

