//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>
{
    NSString *_requestIdentifier;
    NSDictionary *_requestDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (_Bool)isEqualToRemoteThumbnailKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

