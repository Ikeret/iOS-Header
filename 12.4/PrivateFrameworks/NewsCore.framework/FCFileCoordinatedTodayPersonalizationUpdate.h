//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject
{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
- (void).cxx_destruct;
- (void)clearUpdates;
- (void)submitUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

