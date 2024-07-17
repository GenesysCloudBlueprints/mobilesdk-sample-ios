
// GenesysCloud version number: v1.9.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

/************************************************************/
// MARK: - StatementStatus
/************************************************************/

/// An StatementStatus is an enum of different statemen states
typedef NS_ENUM(NSInteger, StatementStatus) {
    /// Sent when statement response status is ok
    OK = 0,
    /// Sent when statement response status is pending
    Pending = 1,
    /// Sent when statement response status is error
    Error = 2,
    /// Shouldn't be presented
    Repost = 3,
    /// Should be default
    None = 4,
    /// Sent when statement response status is inprocess
    InProcess = 5
};

