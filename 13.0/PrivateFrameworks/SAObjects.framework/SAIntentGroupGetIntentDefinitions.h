//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand
{
}

+ (id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getIntentDefinitions;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *queries;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

