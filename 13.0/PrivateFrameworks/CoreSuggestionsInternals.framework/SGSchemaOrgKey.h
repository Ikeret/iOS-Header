//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGSchemaOrgKey : NSObject <SGEntityKey>
{
    NSString *_uuid;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSchemaOrgKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)init;
- (id)serialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

