//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSPredicate, NSSet;

@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer>
{
    NSSet *_uniquePidSet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *uniquePidSet; // @synthesize uniquePidSet=_uniquePidSet;
- (void)addUniquePIDNumberSet:(id)arg1;
- (void)addUniquePIDNumber:(id)arg1;
- (_Bool)passesUniquePIDNumber:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
@property(readonly, nonatomic) _Bool _wantsNotEqual;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;

@end

