//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSSet;

@interface _HDSampleTypesDeletionEntry : HDJournalEntry
{
    NSSet *_sourceIDs;
    NSSet *_types;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *types; // @synthesize types=_types;
@property(copy, nonatomic) NSSet *sourceIDs; // @synthesize sourceIDs=_sourceIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIDs:(id)arg1 types:(id)arg2;

@end

