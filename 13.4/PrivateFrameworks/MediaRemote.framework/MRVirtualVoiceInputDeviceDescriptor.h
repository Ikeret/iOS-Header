//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class NSArray, NSData, NSDictionary, _MRVoiceInputDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>
{
    NSArray *_supportedFormats;
    NSDictionary *_defaultFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *defaultFormat; // @synthesize defaultFormat=_defaultFormat;
@property(readonly, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;
@property(readonly, nonatomic) NSData *data;
- (id)description;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithData:(id)arg1;

@end

