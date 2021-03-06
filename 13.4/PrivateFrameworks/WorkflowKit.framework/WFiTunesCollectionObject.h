//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFiTunesStoreObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing>
{
    NSString *_type;
    NSString *_genre;
    NSNumber *_trackCount;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

