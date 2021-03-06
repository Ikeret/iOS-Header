//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage
{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

- (void).cxx_destruct;
- (unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (unsigned long long)_lastSupportedMessageType;
- (unsigned long long)type;
- (unsigned long long)encryptionType;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
- (id)initWithDeviceInfo:(id)arg1;

@end

