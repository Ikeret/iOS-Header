//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODRContentHash : NSObject
{
    NSString *_hashValue;
    NSString *_strategy;
}

+ (id)contentHashFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *strategy; // @synthesize strategy=_strategy;
@property(copy) NSString *hashValue; // @synthesize hashValue=_hashValue;
- (id)dictionaryRepresentation;

@end

