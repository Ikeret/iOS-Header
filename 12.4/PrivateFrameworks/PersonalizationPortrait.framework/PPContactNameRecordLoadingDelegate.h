//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPContactNameRecordLoadingDelegate : NSObject
{
    NSString *_name;
    CDUnknownBlockType _contactNameRecordsSetup;
    CDUnknownBlockType _contactNameRecordsHandler;
    CDUnknownBlockType _contactNameRecordsCompletion;
    CDUnknownBlockType _recentContactNameRecordsSetup;
    CDUnknownBlockType _recentContactNameRecordsHandler;
    CDUnknownBlockType _recentContactNameRecordsCompletion;
    CDUnknownBlockType _resetContactNameRecordData;
}

@property(copy, nonatomic) CDUnknownBlockType resetContactNameRecordData; // @synthesize resetContactNameRecordData=_resetContactNameRecordData;
@property(copy, nonatomic) CDUnknownBlockType recentContactNameRecordsCompletion; // @synthesize recentContactNameRecordsCompletion=_recentContactNameRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType recentContactNameRecordsHandler; // @synthesize recentContactNameRecordsHandler=_recentContactNameRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType recentContactNameRecordsSetup; // @synthesize recentContactNameRecordsSetup=_recentContactNameRecordsSetup;
@property(copy, nonatomic) CDUnknownBlockType contactNameRecordsCompletion; // @synthesize contactNameRecordsCompletion=_contactNameRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType contactNameRecordsHandler; // @synthesize contactNameRecordsHandler=_contactNameRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType contactNameRecordsSetup; // @synthesize contactNameRecordsSetup=_contactNameRecordsSetup;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end

